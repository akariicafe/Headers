@interface DDSAssertionDataHandler : NSObject <DDSAssertionDataHandling>

- (void)saveAssertionData:(id)a0;
- (id)assertionContentURL;
- (id)loadAssertionData;
- (id)assertionContentDirectory;

@end
