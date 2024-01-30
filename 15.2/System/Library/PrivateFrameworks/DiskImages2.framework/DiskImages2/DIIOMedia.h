@class NSString;

@interface DIIOMedia : DIIOObject

@property (readonly, copy) NSString *BSDName;

- (id)initWithDevName:(id)a0 error:(id *)a1;
- (id)copyBlockDeviceWithError:(id *)a0;

@end
