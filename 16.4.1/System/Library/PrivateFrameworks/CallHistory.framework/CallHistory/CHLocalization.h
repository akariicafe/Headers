@class NSString, NSBundle;

@interface CHLocalization : NSObject

@property (class, readonly, nonatomic) NSBundle *classBundle;
@property (class, readonly, copy, nonatomic) NSString *localizationTableName;

+ (id)localizedStringForKey:(id)a0;

@end
