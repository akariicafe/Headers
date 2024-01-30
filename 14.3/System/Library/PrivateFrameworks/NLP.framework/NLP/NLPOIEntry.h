@class NSString, NLPOIEntryImpl;

@interface NLPOIEntry : NSObject <NLParsecNamedEntity> {
    NLPOIEntryImpl *m_impl;
}

@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) unsigned char category;
@property (readonly, nonatomic) float score;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithProtoBuf:(id)a0;

@end
