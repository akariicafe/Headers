@class NSUUID;

@interface HMDUnpairedHAPAccessoryProgressHandler : HMFObject

@property (retain, nonatomic) NSUUID *accessoryUUID;
@property (copy, nonatomic) id /* block */ progressHandler;

- (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)a0 progressHandler:(id /* block */)a1;

@end
