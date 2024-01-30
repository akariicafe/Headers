@class NSString, NSArray;

@interface ANPlaybackCommand : NSObject <NSSecureCoding>

@property (class, readonly, nonatomic) ANPlaybackCommand *stopCommand;
@property (class, readonly, nonatomic) ANPlaybackCommand *nextCommand;
@property (class, readonly, nonatomic) ANPlaybackCommand *previousCommand;
@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) unsigned long long operation;
@property (retain, nonatomic) NSString *clientIdentifier;
@property (readonly, nonatomic) unsigned long long options;
@property (readonly, nonatomic) NSArray *announcementIdentifiers;

+ (id)playCommandWithOptions:(unsigned long long)a0 announcementIdentifiers:(id)a1;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)initWithPlaybackOperation:(unsigned long long)a0 options:(unsigned long long)a1 announcementIdentifiers:(id)a2;
- (id)initWithPlaybackOperation:(unsigned long long)a0 options:(unsigned long long)a1 forRecipient:(id)a2;

@end
