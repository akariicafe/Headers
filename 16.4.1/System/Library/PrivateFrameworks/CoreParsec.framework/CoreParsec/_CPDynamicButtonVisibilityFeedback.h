@class NSString, NSArray, NSData;

@interface _CPDynamicButtonVisibilityFeedback : PBCodable <_CPProcessableFeedback, _CPDynamicButtonVisibilityFeedback, NSSecureCoding> {
    unsigned long long _timestamp;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long timestamp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) unsigned long long timestamp;
@property (copy, nonatomic) NSString *cardSectionIdentifier;
@property (copy, nonatomic) NSArray *visibleDynamicButton2s;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;


- (id)initWithFacade:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void)writeTo:(id)a0;
- (id)init;
- (BOOL)readFrom:(id)a0;
- (void).cxx_destruct;
- (void)addVisibleDynamicButton2s:(id)a0;
- (void)clearVisibleDynamicButton2s;
- (id)visibleDynamicButton2sAtIndex:(unsigned long long)a0;
- (unsigned long long)visibleDynamicButton2sCount;

@end
