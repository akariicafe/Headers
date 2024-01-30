@class NSString;
@protocol GEOServerFormattedString;

@interface MKTransitText : NSObject <GEOTransitTextDataSource>

@property (readonly, nonatomic) id<GEOServerFormattedString> text;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithFormattedString:(id)a0;

@end
