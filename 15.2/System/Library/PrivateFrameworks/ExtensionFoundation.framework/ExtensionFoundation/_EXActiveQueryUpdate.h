@class NSSet;

@interface _EXActiveQueryUpdate : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) NSSet *addedExtensions;
@property (readonly) NSSet *removedUUIDs;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithCurrentExtensions:(id)a0 updatedExtensions:(id)a1;
- (id)initWithAddedExtensions:(id)a0 removedUUIDs:(id)a1;

@end
