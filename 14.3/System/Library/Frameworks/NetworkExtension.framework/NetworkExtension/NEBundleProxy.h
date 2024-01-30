@class NSString, NSURL, NSArray;

@interface NEBundleProxy : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, retain, nonatomic) NSString *identifier;
@property (readonly, retain, nonatomic) NSURL *url;
@property (readonly, retain, nonatomic) NSArray *machOUUIDs;
@property (readonly, retain, nonatomic) NSString *name;
@property (nonatomic) BOOL isWatchKitApp;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)a0 url:(id)a1 machOUUIDs:(id)a2 name:(id)a3;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
