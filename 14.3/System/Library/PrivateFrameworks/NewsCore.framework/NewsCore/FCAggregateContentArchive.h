@class NSArray;

@interface FCAggregateContentArchive : FCContentArchive {
    NSArray *_childArchives;
}

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)manifest;
- (id)initWithChildArchives:(id)a0;
- (id)unarchiveIntoContentContext:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;

@end
