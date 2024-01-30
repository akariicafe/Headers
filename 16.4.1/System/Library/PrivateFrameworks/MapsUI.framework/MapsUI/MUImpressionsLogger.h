@class NSString;

@interface MUImpressionsLogger : NSObject <MUImpressionsLogging>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)logImpressionElementDidEnter:(id)a0 onDate:(id)a1;
- (void)logImpressionElementDidExit:(id)a0 usingEnterDate:(id)a1 exitDate:(id)a2;

@end
