@class NSString, NSArray, Device;

@interface MediaStream : INObject

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, retain) Device *groupLeader;

- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0 displayString:(id)a1 pronunciationHint:(id)a2;

@end
