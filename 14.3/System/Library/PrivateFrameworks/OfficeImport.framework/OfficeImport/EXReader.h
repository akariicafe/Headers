@class NSString;

@interface EXReader : OCXReader

@property (retain, nonatomic) NSString *temporaryDirectory;

- (void).cxx_destruct;
- (id)read;
- (id)defaultPassphrase;

@end
