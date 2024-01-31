@class NSString;

@interface Core_Audio_Driver_Client_Info : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned int client_id;
@property (nonatomic) int process_id;
@property (nonatomic) BOOL is_native_endian;
@property (retain, nonatomic) NSString *bundle_id;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (struct AudioServerPlugInClientInfo { unsigned int x0; int x1; unsigned char x2; struct __CFString *x3; })create_asp_client_info;
- (id)init_with_asp_client_info:(const struct AudioServerPlugInClientInfo { unsigned int x0; int x1; unsigned char x2; struct __CFString *x3; } *)a0;

@end
