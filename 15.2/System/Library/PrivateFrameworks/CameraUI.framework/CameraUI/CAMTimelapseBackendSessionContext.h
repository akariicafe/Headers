@class NSString, CAMTimelapseState, NSArray;

@interface CAMTimelapseBackendSessionContext : NSObject

@property (readonly, nonatomic) NSString *timelapseUUID;
@property (retain, nonatomic) CAMTimelapseState *state;
@property (retain, nonatomic) NSArray *filesToDelete;
@property (retain, nonatomic) NSArray *filesToWrite;

- (id)description;
- (void).cxx_destruct;
- (id)init;
- (id)initWithTimelapseUUID:(id)a0;

@end
