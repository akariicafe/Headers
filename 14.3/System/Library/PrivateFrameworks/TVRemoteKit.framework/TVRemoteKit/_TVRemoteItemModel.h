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

- (id)initWithItem:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)description;
- (void)encodeWithCoder:(id)a0;
- (id)_stringForItemType:(long long)a0;

@end
