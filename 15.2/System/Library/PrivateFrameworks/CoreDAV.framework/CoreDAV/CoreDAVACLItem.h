@class NSMutableSet;

@interface CoreDAVACLItem : CoreDAVItem

@property (retain, nonatomic) NSMutableSet *accessControlEntities;

+ (id)copyParseRules;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (void)addACE:(id)a0;
- (id)notGrantedSubsetOfACEs:(id)a0;
- (id)liveACEs;

@end
