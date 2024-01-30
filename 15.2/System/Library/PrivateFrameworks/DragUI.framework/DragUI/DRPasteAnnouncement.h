@class NSString, NSUUID, DRPasteAnnouncementEndpoint;

@interface DRPasteAnnouncement : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *localizedAnnouncementText;
@property (readonly, nonatomic) DRPasteAnnouncementEndpoint *source;
@property (readonly, nonatomic) DRPasteAnnouncementEndpoint *destination;
@property (readonly, nonatomic) NSUUID *pasteboardUUID;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithSource:(id)a0 destination:(id)a1 pasteboardUUID:(id)a2;
- (BOOL)canCoalesceWithAnnouncement:(id)a0;

@end
