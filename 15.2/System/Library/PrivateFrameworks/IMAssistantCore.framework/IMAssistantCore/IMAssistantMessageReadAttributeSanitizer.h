@class NSString;

@interface IMAssistantMessageReadAttributeSanitizer : NSObject <IMAssistantMessageAttributeSanitizer>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)sanitize:(unsigned long long)a0;

@end
