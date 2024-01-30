@class NSString, CAMTimelapseState, NSArray;

@interface CAMTimelapseBackendSessionContext : NSObject

@property (readonly, nonatomic) NSString *timelapseUUID;
@property (retain, nonatomic) CAMTimelapseState *state;
@property (retain, nonatomic) NSArray *filesToDelete;
@property (retain, nonatomic) NSArray *filesToWrite;

- (id)init;
- (id)description;
- (void).cxx_destruct;
- (id)initWithTimelapseUUID:(id)a0;

@end
