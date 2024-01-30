@class NSString, NSBundle, NSArray;

@interface FPLocalizableStringLookup : NSObject

@property (retain, nonatomic) NSBundle *bundle;
@property (retain, nonatomic) id cfBundle;
@property (copy, nonatomic) NSString *tableName;
@property (copy, nonatomic) NSArray *tableNames;

- (id)localizedStringForKey:(id)a0;
- (void).cxx_destruct;

@end
