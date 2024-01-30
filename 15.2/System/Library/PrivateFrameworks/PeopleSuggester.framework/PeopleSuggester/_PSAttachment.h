@class NSString, NSUUID, NSURL, NSDate;

@interface _PSAttachment : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSString *UTI;
@property (readonly, copy, nonatomic) NSString *photoLocalIdentifier;
@property (readonly, copy, nonatomic) NSUUID *identifier;
@property (readonly, copy, nonatomic) NSUUID *cloudIdentifier;
@property (readonly, copy, nonatomic) NSURL *contentURL;
@property (readonly, copy, nonatomic) NSString *contentText;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (id)initWithCreationDate:(id)a0 UTI:(id)a1 photoLocalIdentifier:(id)a2 identifier:(id)a3 cloudIdentifier:(id)a4 contentURL:(id)a5 contentText:(id)a6;

@end
