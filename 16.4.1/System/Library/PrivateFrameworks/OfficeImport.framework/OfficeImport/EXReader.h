@class NSString;

@interface EXReader : OCXReader

@property (retain, nonatomic) NSString *temporaryDirectory;

- (id)read;
- (void).cxx_destruct;
- (id)defaultPassphrase;

@end
