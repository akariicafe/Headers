@class NSArray;

@interface CRKFetchSafariBookmarksResultObject : CATTaskResultObject

@property (copy, nonatomic) NSArray *bookmarks;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;

@end
