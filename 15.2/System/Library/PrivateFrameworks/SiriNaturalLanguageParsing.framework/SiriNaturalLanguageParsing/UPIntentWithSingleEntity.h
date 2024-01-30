@class NSString, UPEntityWithValue;

@interface UPIntentWithSingleEntity : NSObject

@property (readonly) NSString *intent;
@property (readonly) UPEntityWithValue *entity;

- (void).cxx_destruct;
- (id)initWithIntent:(id)a0 singleEntity:(id)a1;
- (BOOL)isEqualToIntentWithSingleEntity:(id)a0;

@end
