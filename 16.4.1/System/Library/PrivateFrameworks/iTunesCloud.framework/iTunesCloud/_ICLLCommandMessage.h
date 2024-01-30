@class _ICLLCurrentItemChangeCommand, _ICLLReactionCommand, _ICLLPlaybackControlSettingsCommand, _ICLLCurrentItemTransitionCommand, _ICLLPlaybackSyncCommand, _ICLLRemoveQueueItemCommand, _ICLLReplaceQueueItemsCommand, _ICLLClientInfoCommand, _ICLLAddQueueItemsCommand, _ICLLMoveQueueItemCommand, _ICLLPlayNowQueueItemsCommand;

@interface _ICLLCommandMessage : PBCodable <NSCopying> {
    _ICLLAddQueueItemsCommand *_addItems;
    _ICLLClientInfoCommand *_clientInfo;
    int _command;
    _ICLLCurrentItemChangeCommand *_currentItemChange;
    _ICLLCurrentItemTransitionCommand *_currentItemTransition;
    _ICLLMoveQueueItemCommand *_moveItem;
    _ICLLPlayNowQueueItemsCommand *_playNowQueueItems;
    _ICLLPlaybackControlSettingsCommand *_playbackControlSettings;
    _ICLLPlaybackSyncCommand *_playbackSync;
    _ICLLReactionCommand *_reaction;
    _ICLLRemoveQueueItemCommand *_removeItem;
    _ICLLReplaceQueueItemsCommand *_replaceQueueItems;
    struct { unsigned char command : 1; } _has;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)dictionaryRepresentation;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)writeTo:(id)a0;
- (BOOL)readFrom:(id)a0;
- (id)description;
- (void).cxx_destruct;

@end
