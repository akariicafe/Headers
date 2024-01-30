@class NSString;

@interface CalLogXMLFormatter : NSObject <CalLogFormatter>

@property (nonatomic) BOOL shouldPrettyPrint;
@property (nonatomic) BOOL useTinyElementNames;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)newFormattedString:(id)a0;

@end
