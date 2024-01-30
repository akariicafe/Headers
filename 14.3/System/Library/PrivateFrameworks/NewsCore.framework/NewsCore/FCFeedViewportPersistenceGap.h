@class NSString, NSArray;

@interface FCFeedViewportPersistenceGap : NSObject <FCFeedElement>

@property (readonly, copy, nonatomic) NSString *firstGroupID;
@property (readonly, copy, nonatomic) NSString *lastGroupID;
@property (readonly, copy, nonatomic) NSArray *hiddenElements;
@property (readonly, nonatomic) long long feedElementType;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithIdentifier:(id)a0;
- (id)initWithFirstGroupID:(id)a0 lastGroupID:(id)a1 hiddenElements:(id)a2;
- (BOOL)isGap;
- (BOOL)isEqual:(id)a0;
- (id)copyWithHiddenElements:(id)a0;
- (id)initWithIdentifier:(id)a0 firstGroupID:(id)a1 lastGroupID:(id)a2 hiddenElements:(id)a3;

@end
