@class NSNumberFormatter, NSString;

@interface NWMPrecipitationFormatter : NSObject <NWMDataFormatter>

@property (class, readonly) NWMPrecipitationFormatter *sharedFormatter;

@property (retain, nonatomic) NSNumberFormatter *numberFormatter;
@property (retain, nonatomic) NSNumberFormatter *percentageFormatter;
@property (readonly, nonatomic) NSString *percentSymbol;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
