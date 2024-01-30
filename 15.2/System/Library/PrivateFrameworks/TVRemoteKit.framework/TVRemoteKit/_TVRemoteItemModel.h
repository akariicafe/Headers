@class NSString, NSArray;
@protocol TVRemoteItem;

@interface _TVRemoteItemModel : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) id<TVRemoteItem> item;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long icon;
@property (nonatomic) long long itemType;
@property (nonatomic, getter=isGroup) BOOL group;
@property (copy, nonatomic) NSArray *items;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithItem:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)_stringForItemType:(long long)a0;

@end
