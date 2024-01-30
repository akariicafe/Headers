@class NSURL, NSData;

@interface REMURLAttachment : REMAttachment

@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSData *metadata;

+ (BOOL)supportsSecureCoding;
+ (id)cdEntityName;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_deepCopy;
- (id)debugDescription;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithObjectID:(id)a0 accountID:(id)a1 reminderID:(id)a2 url:(id)a3 metadata:(id)a4;

@end
