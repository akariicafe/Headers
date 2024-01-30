@class NSString, CAMTimelapseState, NSArray;

@interface CAMTimelapseBackendSessionContext : NSObject

@property (readonly, nonatomic) NSString *timelapseUUID;
@property (retain, nonatomic) CAMTimelapseState *state;
@property (retain, nonatomic) NSArray *filesToDelete;
@property (retain, nonatomic) NSArray *filesToWrite;

- (id)init;
- (void).cxx_destruct;
- (id)description;
- (id)initWithTimelapseUUID:(id)a0;

@end
