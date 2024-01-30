@interface ICASCollaborationStatus : NSObject <AADataType>

@property (readonly, nonatomic) long long collaborationStatus;

- (id)toJsonValueAndReturnError:(id *)a0;
- (id)initWithCollaborationStatus:(long long)a0;

@end
