@class NSString, NSArray;

@interface JFXEffectCategory : NSObject

@property (retain, nonatomic) NSString *categoryID;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSArray *effectIDs;

- (void).cxx_destruct;
- (id)initWithCategoryID:(id)a0 displayName:(id)a1 effectIDs:(id)a2;

@end
