@class NSString, NSNumberFormatter, NSNumber;

@interface NWMPrecipitationFormatter : NSObject <NWMDataFormatter>

@property (class, readonly) NWMPrecipitationFormatter *sharedFormatter;

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSNumberFormatter *percentageFormatter;
@property (retain, nonatomic) NSNumber *minimumPercentage;
@property (readonly, nonatomic) NSString *percentSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (double)value:(id)a0;
- (void).cxx_destruct;
- (id)formattedChanceOfPrecipitation:(id)a0 shouldIncludePercentSymbol:(BOOL)a1;
- (id)formattedChanceOfPrecipitation:(id)a0 style:(unsigned long long)a1 shouldIncludePercentSymbol:(BOOL)a2;
- (id)formattedChanceOfPrecipitationChance:(id)a0 style:(unsigned long long)a1 shouldIncludePercentSymbol:(BOOL)a2;
- (double)roundedChanceOfPrecipitation:(id)a0;

@end
