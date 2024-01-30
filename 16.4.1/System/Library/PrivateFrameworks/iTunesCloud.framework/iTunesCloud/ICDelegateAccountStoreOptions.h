@class NSString, NSXPCListenerEndpoint;

@interface ICDelegateAccountStoreOptions : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *databasePath;
@property (nonatomic, getter=isSingleWriter) BOOL singleWriter;
@property (retain, nonatomic) NSXPCListenerEndpoint *XPCEndpoint;
@property (copy, nonatomic) NSString *XPCServiceName;

+ (id)defaultOptionsWithServiceEndpoint:(id)a0;
+ (id)singleWriterOptionsWithDatabasePath:(id)a0;
+ (id)defaultOptionsWithServiceName:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void).cxx_destruct;

@end
