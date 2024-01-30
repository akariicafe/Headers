@class NSArray;

@interface TSUStringEncodingHelper : NSObject

@property (class, readonly, nonatomic) NSArray *localizedEncodingNames;

+ (id)localizedNameOfStringEncoding:(unsigned long long)a0;
+ (unsigned long long)encodingForLocalizedName:(id)a0;
+ (id)p_fallbackNameForEncoding:(unsigned long long)a0;
+ (void)p_initializeEncodings;

@end
