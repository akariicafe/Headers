@class NSString, NSUUID;

@interface IXDataPromiseSeed : NSObject <NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned long long creatorIdentifier;
@property (retain, nonatomic) NSUUID *uniqueIdentifier;
@property (nonatomic) unsigned long long totalBytesNeededOnDisk;
@property (readonly, nonatomic) Class clientPromiseClass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
