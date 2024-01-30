@interface ICASCollaborationAccessType : NSObject <AADataType>

@property (readonly, nonatomic) long long collaborationAccessType;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCollaborationAccessType:(long long)a0;

@end
