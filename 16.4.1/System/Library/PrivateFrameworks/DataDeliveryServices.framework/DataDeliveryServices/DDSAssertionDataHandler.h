@interface DDSAssertionDataHandler : NSObject <DDSAssertionDataHandling>

- (id)assertionContentDirectory;
- (id)assertionContentURL;
- (id)loadAssertionData;
- (void)saveAssertionData:(id)a0;

@end
