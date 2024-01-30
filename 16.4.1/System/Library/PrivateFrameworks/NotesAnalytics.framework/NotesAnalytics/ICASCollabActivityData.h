@class NSString, ICASClickContext, ICASCollabActivityContextPath, ICASMode, NSNumber;

@interface ICASCollabActivityData : NSObject <AADataEventType>

@property (class, readonly, copy, nonatomic) NSString *dataName;

@property (readonly, nonatomic) ICASCollabActivityContextPath *collabActivityContextPath;
@property (readonly, nonatomic) ICASClickContext *clickContext;
@property (readonly, nonatomic) ICASMode *mode;
@property (readonly, nonatomic) NSNumber *isUserMentioned;
@property (readonly, nonatomic) NSNumber *hasRecentUpdates;

- (void).cxx_destruct;
- (id)toDict;
- (id)initWithCollabActivityContextPath:(id)a0 clickContext:(id)a1 mode:(id)a2 isUserMentioned:(id)a3 hasRecentUpdates:(id)a4;

@end
