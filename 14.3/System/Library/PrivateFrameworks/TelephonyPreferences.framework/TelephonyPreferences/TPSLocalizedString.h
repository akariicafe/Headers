@class NSString, NSBundle;

@interface TPSLocalizedString : NSObject

@property (class, readonly, nonatomic) NSBundle *classBundle;
@property (class, readonly, copy, nonatomic) NSString *localizationTableName;

+ (id)localizedStringForKey:(id)a0;
+ (id)localizedStringFromTable:(id)a0 forKey:(id)a1;

@end
