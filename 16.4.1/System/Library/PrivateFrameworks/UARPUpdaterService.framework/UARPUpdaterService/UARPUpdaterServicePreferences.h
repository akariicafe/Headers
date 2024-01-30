@class NSString;

@interface UARPUpdaterServicePreferences : NSObject

@property (readonly) NSString *domain;

- (id)initWithDomain:(id)a0;
- (void).cxx_destruct;
- (id)uuidForAccessory:(id)a0 serialNumber:(id)a1 error:(id *)a2;

@end
