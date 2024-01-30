@class NSString;

@interface TTREMHashtag : NSObject <TTModelAttributeComparable>

@property (copy, nonatomic) NSString *objectIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHashtag:(id)a0 equalToModelComparable:(id)a1;

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToModelComparable:(id)a0;

@end
