@class NSString, NSMutableArray;

@interface NMSObfuscatableDescription : NSObject

@property (retain, nonatomic) NSMutableArray *items;
@property (retain, nonatomic) NSString *prefixString;

- (id)init;
- (id)CPSafeDescription;
- (void).cxx_destruct;
- (id)description;
- (id)_descriptionObfuscated:(BOOL)a0;
- (void)addDescriptionFormat:(id)a0 value:(id)a1;
- (void)addObfuscatedDescriptionFormat:(id)a0 value:(id)a1;

@end
