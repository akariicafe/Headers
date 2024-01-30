@class NSArray, NSString;
@protocol GEOServerConditionalString;

@interface MNTraceEventServerFormattedString : NSObject <GEOServerFormattedString>

@property (readonly, nonatomic) NSArray *formatStrings;
@property (readonly, nonatomic) NSArray *formatTokens;
@property (readonly, nonatomic) NSArray *separators;
@property (readonly, nonatomic) NSArray *formatStyles;
@property (readonly, nonatomic) id<GEOServerConditionalString> alternativeString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
