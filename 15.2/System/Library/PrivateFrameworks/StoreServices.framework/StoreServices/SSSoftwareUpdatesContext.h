@class NSString, NSArray;

@interface SSSoftwareUpdatesContext : NSObject <SSXPCCoding, NSCopying, NSMutableCopying>

@property (readonly, copy, nonatomic) NSString *clientIdentifierHeader;
@property (readonly, nonatomic, getter=isForced) BOOL forced;
@property (readonly, copy, nonatomic) NSArray *softwareTypes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)dealloc;

@end
