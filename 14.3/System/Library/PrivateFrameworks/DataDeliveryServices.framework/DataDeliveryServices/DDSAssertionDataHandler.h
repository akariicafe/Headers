@interface DDSAssertionDataHandler : NSObject <DDSAssertionDataHandling>

- (id)loadAssertionData;
- (id)assertionContentDirectory;
- (id)assertionContentURL;
- (void)saveAssertionData:(id)a0;

@end
