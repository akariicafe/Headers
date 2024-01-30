@class NSString, NSArray;
@protocol NSCopying;

@interface PKMultiKeyValueRow : NSObject <PKPayLaterCollectionViewRow> {
    NSArray *_sources;
}

@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClass;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)configureCell:(id)a0;
- (id)initKeyValueSources:(id)a0;

@end
