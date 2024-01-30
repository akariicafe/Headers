@class NSString;

@interface FPItemFlags : NSObject <NSCopying, NSSecureCoding, NSFileProviderItemFlags>

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic, getter=isUserExecutable) BOOL userExecutable;
@property (nonatomic, getter=isUserReadable) BOOL userReadable;
@property (nonatomic, getter=isUserWritable) BOOL userWritable;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isPathExtensionHidden) BOOL pathExtensionHidden;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqualToItemFlags:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithItemFlags:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
