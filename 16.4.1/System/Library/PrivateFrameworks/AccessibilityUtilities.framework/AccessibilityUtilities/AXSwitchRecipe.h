@class NSUUID, NSString, NSArray;

@interface AXSwitchRecipe : NSObject {
    NSString *_name;
}

@property (retain, nonatomic) NSUUID *uuid;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) NSArray *mappings;
@property (nonatomic) double timeout;
@property (retain, nonatomic) NSString *unlocalizedName;
@property (readonly, nonatomic) BOOL shouldContinueScanning;
@property (copy, nonatomic) NSString *menuIconIdentifier;

+ (id)recipeWithDictionaryRepresentation:(id)a0;

- (id)dictionaryRepresentation;
- (id)init;
- (id)description;
- (void).cxx_destruct;

@end
