@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *accessControlEntities;

+ (id)copyParseRules;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (void)addACE:(id)a0;
- (id)notGrantedSubsetOfACEs:(id)a0;
- (id)liveACEs;

@end
