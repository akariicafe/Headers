@class NSUUID, NSArray, NSString;

@interface MSPContainerArrayStateSnapshot : NSObject <MSPContainerStateSnapshot>

@property (retain, nonatomic) NSUUID *clientIdentifier;
@property (readonly, copy, nonatomic) NSArray *contents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)init;
- (id)initWithContents:(id)a0;
- (id)initWithContents:(id)a0 clientIdentifier:(id)a1;

@end
