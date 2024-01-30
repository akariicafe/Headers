@class NSString, NSDate;

@interface ICMusicLibraryAuthToken : NSObject <ICMutableMusicLibraryAuthToken, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSDate *expirationDate;
@property (copy, nonatomic) NSString *deviceGUID;
@property (nonatomic, getter=isFrozen) BOOL frozen;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
